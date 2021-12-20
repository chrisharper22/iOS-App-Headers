//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCommentModel, IGDirectNUXConfig, IGDirectRecipientListViewConfiguration, IGDirectShareRecipient, IGMedia, IGPostItem, IGShareToStoryValue, IGStoryViewerLoggingContext, IGStoryViewerViewModel, NSSet, NSString, UIView, UIViewController;
@protocol IGDirectShareSheetControllerDelegate, IGDirectShareSheetWarningMessageDataSource, IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate, IGSponsoredInfoProviding, IGStoryItemType;

@protocol IGDirectShareSheetControlling <NSObject>
@property(copy, nonatomic) NSString *sendAttribution;
@property(nonatomic) _Bool shouldForwardAppearanceToPresenter;
@property(nonatomic) __weak IGDirectNUXConfig *directNUXConfig;
@property(nonatomic) __weak id <IGDirectShareSheetWarningMessageDataSource> warningMessageDataSource;
@property(nonatomic) __weak id <IGDirectShareSheetControllerDelegate> delegate;
- (void)updateToastContainerView:(UIView *)arg1 bottomInset:(double)arg2;
- (void)dismissShareSheetWithAnimationDuration:(double)arg1 logCancellation:(_Bool)arg2;
- (void)dismissShareSheetAnimated:(_Bool)arg1 logCancellation:(_Bool)arg2;
- (_Bool)isDirectShareSheetOnScreen;
- (NSString *)presentShareSheetWithOverlayView:(_Bool)arg1 directRecipientConfiguration:(IGDirectRecipientListViewConfiguration *)arg2 media:(IGMedia *)arg3 selectedPost:(IGPostItem *)arg4 sponsoredInfoProvider:(id <IGSponsoredInfoProviding>)arg5 reshareToStoryValue:(IGShareToStoryValue *)arg6 storyViewModel:(IGStoryViewerViewModel *)arg7 prioritizedShareRecipient:(IGDirectShareRecipient *)arg8 excludedRecipients:(NSSet *)arg9 storyViewerLoggingContext:(IGStoryViewerLoggingContext *)arg10 currentStoryItem:(id <IGStoryItemType>)arg11 commentModel:(IGCommentModel *)arg12 hostingViewController:(UIViewController *)arg13 loggingProvider:(id <IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate>)arg14 sendType:(NSString *)arg15 sheetType:(long long)arg16 textMessage:(NSString *)arg17 shouldOpenFullScreen:(_Bool)arg18;
@end

