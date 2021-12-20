//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAPIClient, IGLaminarRequestProvider;

@interface IGLaminar : NSObject
{
    id <IGLaminarRequestProvider> _requestProvider;
    NSString *_userPk;
    _Bool _enabled;
    _Bool _shouldWaitForResponse;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (void)prepareAndSaveRequest;
- (_Bool)isEnabled;
- (void)setRequestProvider:(id)arg1;
- (id)initWithUserPk:(id)arg1 networker:(id)arg2 featureEnabled:(_Bool)arg3 shouldWaitForResponse:(_Bool)arg4;

@end

