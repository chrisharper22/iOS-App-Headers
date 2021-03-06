//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAPIClient;

@interface IGMonetizationProductOnboardingRequestSender : NSObject
{
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (void)sendOnboardingStepsRequestWithProductType:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendRequestWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithNetworker:(id)arg1;

@end

