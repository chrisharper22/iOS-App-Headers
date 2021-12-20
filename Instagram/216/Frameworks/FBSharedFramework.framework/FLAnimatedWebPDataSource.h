//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FLAnimatedImageFrameDataSource-Protocol.h>

@class FLAnimatedWebPDemuxer, NSArray, NSString;

@interface FLAnimatedWebPDataSource : NSObject <FLAnimatedImageFrameDataSource>
{
    FLAnimatedWebPDemuxer *_demuxer;
    NSArray *_frameInfo;
    struct CGRect _imageRect;
}

- (void).cxx_destruct;
- (id)blendImage:(id)arg1 atIndex:(unsigned long long)arg2 withPreviousImage:(id)arg3;
- (_Bool)frameRequiresBlendingWithPreviousFrame:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithWebPDemuxer:(id)arg1 frameInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
