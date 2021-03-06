//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserDefaults;
@protocol IGAPIClient;

@interface IGContactPointManager : NSObject
{
    id <IGAPIClient> _networker;
    IGUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)_fetchPrefillContactPointsWithAccessToken:(id)arg1;
- (void)_getFBAccessToken:(CDUnknownBlockType)arg1;
- (id)prefillEmail;
- (id)prefillPhoneNumber;
- (void)fetchPrefillContactPoints;
- (id)initWithNetworker:(id)arg1 userDefaults:(id)arg2;

@end

