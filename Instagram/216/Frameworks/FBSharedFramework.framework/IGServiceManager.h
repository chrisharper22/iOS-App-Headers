//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFacebookPermissionListener-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>
#import <FBSharedFramework/MFMessageComposeViewControllerDelegate-Protocol.h>

@class IGAmebaHelper, IGFacebookServiceHelper, IGMixiHelper, IGOdnoklassnikiHelper, IGTumblrHelper, IGTwitterOAuthHelper, IGUserSession, IGVkHelper, IGWeiboHelper, IGWhatsAppServiceHelper, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGServiceManager : NSObject <IGFacebookPermissionListener, MFMessageComposeViewControllerDelegate, IGUserSessionEndingObject>
{
    IGUserSession *_userSession;
    IGTwitterOAuthHelper *_twitterOAuthHelper;
    IGFacebookServiceHelper *_facebookServiceHelper;
    IGWhatsAppServiceHelper *_whatsAppServiceHelper;
    IGTumblrHelper *_tumblrHelper;
    IGWeiboHelper *_weiboHelper;
    IGMixiHelper *_mixiHelper;
    IGVkHelper *_vkHelper;
    IGAmebaHelper *_amebaHelper;
    IGOdnoklassnikiHelper *_odnoklassnikiHelper;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    CDUnknownBlockType _messageComposeCompletion;
}

- (void).cxx_destruct;
- (void)_handleShareToExternalURL:(id)arg1 shareOption:(id)arg2 permalink:(id)arg3 media:(id)arg4 viewController:(id)arg5 shareLocation:(id)arg6 module:(id)arg7 failureMessageTitleText:(id)arg8;
- (void)userSessionWillEnd;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)_handleCopyURLWithPermalink:(id)arg1;
- (id)_shareKeyForService:(long long)arg1;
- (void)facebookPermissionRemoved;
- (void)facebookPermissionAcquired;
- (void)handleCopyURLForVoiceoverPage;
- (void)handleCopyURLForAudioWithPk:(id)arg1 fromViewController:(id)arg2;
- (void)handleCopyURLForVotingInfoCenter:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleShareViaSystemSheetWithLocation:(id)arg1 thumbnailURL:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 module:(id)arg5;
- (id)_fallbackShareURLStringForGuide:(id)arg1;
- (void)handleShareViaSystemSheetWithGuide:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForGuide:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForLiveBroadcastWithBroadcaster:(id)arg1 broadcastId:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 module:(id)arg5;
- (void)handleCopyURLForStoryWithUser:(id)arg1 mediaID:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 module:(id)arg5;
- (void)handleCopyURLForEntireStoriesWithUser:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleShareViaSystemShareSheetWithBroadcastItem:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForLiveWithLiveBroastcastItem:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForProfileWithUser:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleShareToLineWithMedia:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForStoryHighlightWithPk:(id)arg1 mediaId:(id)arg2 ownerId:(id)arg3 viewController:(id)arg4 shareLocation:(id)arg5 module:(id)arg6;
- (void)handleShareLiveBroadcastViaSystemShareSheetWithBroadcaster:(id)arg1 broadcastId:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 module:(id)arg5;
- (void)handleShareURLViaSystemShareSheetWithURL:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 onShareCompletion:(CDUnknownBlockType)arg4 module:(id)arg5;
- (void)handleShareStoryHighlightsViaSystemShareSheetWithPk:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 module:(id)arg5;
- (void)handleShareStoryViaSystemShareSheetWithUser:(id)arg1 mediaID:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 module:(id)arg6;
- (void)handleShareViaSystemShareSheetWithMedia:(id)arg1 analyticsExtra:(id)arg2 viewController:(id)arg3 shareLocation:(id)arg4 completion:(CDUnknownBlockType)arg5 module:(id)arg6;
- (void)handleShareToIMessageWithMedia:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 completion:(CDUnknownBlockType)arg4 module:(id)arg5;
- (void)handleShareToTelegramWithMedia:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleShareToVKWithMedia:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleShareToWhatsAppWithMedia:(id)arg1 viewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (void)handleCopyURLForMedia:(id)arg1 fromViewController:(id)arg2 shareLocation:(id)arg3 module:(id)arg4;
- (id)shareServicesForServiceTypes:(id)arg1 sharingInfo:(id)arg2;
- (id)serviceTypesForCurrentLocaleMediaType:(long long)arg1 crosspostingOrigins:(id)arg2 locationAvailable:(_Bool)arg3;
- (void)fetchLinkedAccountsOfAllServicesFromServerAtEntryPoint:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (void)logoutService:(long long)arg1;
- (void)logoutAllServices;
- (id)serviceHelperForService:(long long)arg1;
- (id)sharingInfoForService:(long long)arg1;
- (_Bool)serviceIsConfiguredForCrossPosting:(long long)arg1;
- (_Bool)willShareForService:(long long)arg1;
- (_Bool)shouldUseSubtitleCellStyleForService:(long long)arg1;
- (_Bool)serviceIsConfiguredOnlyOnServer:(long long)arg1;
- (_Bool)serviceIsConfigured:(long long)arg1;
- (id)shortNameForService:(long long)arg1;
- (id)nameForService:(long long)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
