//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGActionSheetControllerAction.h>

@interface IGActionSheetControllerAction (FeedItem)
+ (void)_addRemixReelActionToActionsIfNecessary:(id)arg1 media:(id)arg2 userSession:(id)arg3 delegate:(id)arg4;
+ (void)_addSelectVideoQualityActionToActionsIfNecessary:(id)arg1 media:(id)arg2 userSession:(id)arg3 delegate:(id)arg4;
+ (void)_configureActionSheetShareActionsUFIV3WithActions:(id)arg1 media:(id)arg2 module:(id)arg3 userSession:(id)arg4 delegate:(id)arg5;
+ (id)_graphManagementActionsFor:(id)arg1 style:(long long)arg2 unfollowType:(unsigned long long)arg3 allowMuting:(_Bool)arg4 delegate:(id)arg5;
+ (id)secondaryAdActionsWithDelegate:(id)arg1;
+ (id)aboutAdsOnlyAdActionsWithDelegate:(id)arg1;
+ (id)brandedContentAdApprovalNotificationActionsForMedia:(id)arg1 delegate:(id)arg2;
+ (id)brandedContentPromotionNotificationActionsForMedia:(id)arg1 delegate:(id)arg2 userSession:(id)arg3 sponsoredInfoProvider:(id)arg4 module:(id)arg5 entryPoint:(unsigned long long)arg6 allowSFPLT:(_Bool)arg7 allowUnfollowType:(unsigned long long)arg8 feedItemConfiguration:(id)arg9;
+ (id)standardAdActionsForMedia:(id)arg1 allowHidingSponsoredPost:(_Bool)arg2 userSession:(id)arg3 delegate:(id)arg4;
+ (id)standardActionsForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 allowSFPLT:(_Bool)arg3 allowMuting:(_Bool)arg4 allowUnfollowType:(unsigned long long)arg5 allowReportPostDoesntMatchHashtag:(_Bool)arg6 allowPostChaining:(_Bool)arg7 allowEditFilters:(_Bool)arg8 allowSaving:(_Bool)arg9 module:(id)arg10 entryPoint:(unsigned long long)arg11 userSession:(id)arg12 mediaSurface:(long long)arg13 delegate:(id)arg14 feedItemConfiguration:(id)arg15;
@end
