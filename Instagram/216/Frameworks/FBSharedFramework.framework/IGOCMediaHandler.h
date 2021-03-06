//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCaptureModePixelBufferProducing-Protocol.h>
#import <FBSharedFramework/OCMMediaMode-Protocol.h>
#import <FBSharedFramework/OCMMediaOutputHandler-Protocol.h>

@class NSString, OCMMediaManager, UIImage;
@protocol OCMMediaManagerProtocol, OS_dispatch_queue;

@interface IGOCMediaHandler : NSObject <OCMMediaOutputHandler, OCMMediaMode, FBCaptureModePixelBufferProducing>
{
    NSObject<OS_dispatch_queue> *_mediaHandlerQueue;
    OCMMediaManager *_mediaManager;
    CDUnknownBlockType _pixelBufferProducingCompletion;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)produceWithSourcePixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaDidOutputPixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) id <OCMMediaManagerProtocol> mediaManager;
@property(readonly, nonatomic) UIImage *previewImage;
- (void)exportFilterConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unApplyFiltersWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyFiltersWithConfig:(id)arg1 effectID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

