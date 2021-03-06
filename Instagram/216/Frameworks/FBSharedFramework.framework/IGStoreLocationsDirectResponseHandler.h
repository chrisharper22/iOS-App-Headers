//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectResponseHandling-Protocol.h>

@class NSString;
@protocol IGFeedItemDirectResponseLoggingProviderDelegate;

@interface IGStoreLocationsDirectResponseHandler : NSObject <IGDirectResponseHandling>
{
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (id)handleFeedItem:(id)arg1 feedItemTracker:(id)arg2 shoppingSessionTracker:(id)arg3 directResponseInfo:(id)arg4 viewController:(id)arg5 pageCellState:(id)arg6 mediaPosition:(long long)arg7 userSession:(id)arg8 context:(unsigned long long)arg9 module:(id)arg10 showCallConfirmation:(_Bool)arg11 completion:(CDUnknownBlockType)arg12;
- (id)initWithLoggingDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

