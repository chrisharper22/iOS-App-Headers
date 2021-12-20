//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGProfileBioLinksLogger : NSObject
{
}

+ (void)logMASUsersForBioSaveWithMASPKs:(id)arg1 module:(id)arg2 analyticsLogger:(id)arg3;
+ (void)logTapRemoveTagFromFromProfileWithUserID:(id)arg1 selfUserID:(id)arg2 module:(id)arg3 analyticsLogger:(id)arg4;
+ (void)logTapViewProfileFromProfileWithUserID:(id)arg1 selfUserID:(id)arg2 module:(id)arg3 analyticsLogger:(id)arg4;
+ (void)logSearchResultsReturnedForSearch:(id)arg1 rankToken:(id)arg2 module:(id)arg3 linkType:(long long)arg4 requestTime:(double)arg5 analyticsLogger:(id)arg6;
+ (void)logSearchResultClickForProfileBioLink:(id)arg1 rankToken:(id)arg2 module:(id)arg3 position:(long long)arg4 isMultiAccountUser:(_Bool)arg5 analyticsLogger:(id)arg6;
+ (void)logNavigationEventForProfileBioLink:(id)arg1 profileUserPK:(id)arg2 module:(id)arg3 analyticsLogger:(id)arg4;

@end
