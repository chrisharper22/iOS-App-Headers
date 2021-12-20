//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCommentModel, IGDirectRecipientListViewConfiguration, IGDirectRecipientOneTapStateTracker, IGDirectShareRecipient, IGDirectShareSheetOneTapButtonTextGrouping, IGMedia, IGPostItem, IGShareToStoryValue, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUserSession, IGViewController, NSArray, NSOrderedSet, NSSet, NSString, UIViewController;
@protocol IGDirectRecipientListViewControllerType, IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate, IGSponsoredInfoProviding, IGStoryItemType><IGUnitItemInformationProviding;

@protocol IGDirectRecipientListIntf <NSObject>
+ (IGViewController<IGDirectRecipientListViewControllerType> *)recipientListViewControllerWithUserSession:(IGUserSession *)arg1 configuration:(IGDirectRecipientListViewConfiguration *)arg2 media:(IGMedia *)arg3 selectedPost:(IGPostItem *)arg4 sponsoredInfoProvider:(id <IGSponsoredInfoProviding>)arg5 reshareToStoryValue:(IGShareToStoryValue *)arg6 initialIntendedRecipient:(IGDirectShareRecipient *)arg7 shouldRemindToSendToInitialRecipient:(_Bool)arg8 selectedStorySendTarget:(long long)arg9 selectedExternalShareServices:(NSSet *)arg10 selectedRecipients:(NSOrderedSet *)arg11 recipientsFromSearch:(NSOrderedSet *)arg12 bumpedRecipients:(NSSet *)arg13 excludedRecipients:(NSSet *)arg14 oneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg15 oneTapTitleTexts:(IGDirectShareSheetOneTapButtonTextGrouping *)arg16 oneTapAccessibilityTexts:(IGDirectShareSheetOneTapButtonTextGrouping *)arg17 storyViewerViewModel:(IGStoryViewerViewModel *)arg18 storyViewerLoggingContext:(IGStoryViewerLoggingContext *)arg19 currentStoryItem:(id <IGStoryItemType><IGUnitItemInformationProviding>)arg20 commentModel:(IGCommentModel *)arg21 analyticsModule:(NSString *)arg22 storyCreationModels:(NSArray *)arg23 warningMessage:(NSString *)arg24 isInPartialModalSheet:(_Bool)arg25 hostingViewController:(UIViewController *)arg26 loggingProvider:(id <IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate>)arg27 title:(NSString *)arg28 entryPoint:(NSString *)arg29 sendType:(NSString *)arg30 shareSheetSessionId:(NSString *)arg31 sheetType:(long long)arg32 textMessage:(NSString *)arg33;
@end

