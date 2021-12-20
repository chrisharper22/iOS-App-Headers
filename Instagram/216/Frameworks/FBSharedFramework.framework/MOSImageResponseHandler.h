//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MOSImageResponseHandlerCallbacks, NSDictionary;
@protocol MOSResponseHandlingDelegate;

@interface MOSImageResponseHandler : NSObject
{
    id <MOSResponseHandlingDelegate> _delegate;
    MOSImageResponseHandlerCallbacks *_callbacks;
    NSDictionary *_debugData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *debugData; // @synthesize debugData=_debugData;
@property(readonly, nonatomic) MOSImageResponseHandlerCallbacks *callbacks; // @synthesize callbacks=_callbacks;
@property(nonatomic) __weak id <MOSResponseHandlingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)abort;
- (void)close;
- (void)handleData:(id)arg1;
- (void)openWithPartialData:(id)arg1 expectedFinalDataLength:(long long)arg2;
- (id)initWithCallbacks:(id)arg1;

@end
