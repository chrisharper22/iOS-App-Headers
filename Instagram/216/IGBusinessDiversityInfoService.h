//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLService, IGBusinessDiversityInfoCache, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGAuthHeaderManaging, IGUserLauncherSet, IGUserUpdatedAnnouncer;

@interface IGBusinessDiversityInfoService : NSObject
{
    IGBusinessDiversityInfoCache *_categoryCache;
    id <IGUserLauncherSet> _launcherSet;
    FBGraphQLService *_graphQLServices;
    NSString *_userPK;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGAuthHeaderManaging> _authHeaderManager;
    id <IGUserUpdatedAnnouncer> _userUpdatedAnnouncer;
}

- (void).cxx_destruct;
- (void)deleteDiversityProfileWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)setDiversityProfileWithDiversityTypes:(id)arg1 ethnicity:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)getDiversityProfileWithUserPk:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)getDiversityProfileBadgeWithUserPk:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)diversityCategoryForUser:(id)arg1;
- (id)initWithLauncherSet:(id)arg1 graphQLServices:(id)arg2 userPK:(id)arg3 analyticsLogger:(id)arg4 authHeaderManager:(id)arg5 userUpdatedAnnouncer:(id)arg6;

@end

