//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGMonetizationProductOnboardingAcceptTOSRequestSender : NSObject
{
    IGUserSession *_userSession;
    long long _type;
}

- (void).cxx_destruct;
- (void)sendRequestWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 type:(long long)arg2;

@end

