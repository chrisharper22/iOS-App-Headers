//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUser, IGUserDefaults, IGUserStore;
@protocol IGUserFeatureSets;

@interface IGFeedNetworkSourceCoreSessionDeps : NSObject
{
    IGUser *_user;
    IGUserDefaults *_sessionUserDefaults;
    id <IGUserFeatureSets> _featureSets;
    IGUserStore *_userStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserStore *userStore; // @synthesize userStore=_userStore;
@property(readonly, nonatomic) id <IGUserFeatureSets> featureSets; // @synthesize featureSets=_featureSets;
@property(readonly, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)initWithUser:(id)arg1 sessionUserDefaults:(id)arg2 featureSets:(id)arg3 userStore:(id)arg4;

@end

