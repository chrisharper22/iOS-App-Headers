//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCommentBaseSectionController-Protocol.h"
#import "IGCommentCellTapDelegate-Protocol.h"
#import "IGCommentGroupCaptionContentViewDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFollowControllerDelegate-Protocol.h"
#import "IGMediaUpdatedListener-Protocol.h"
#import "IGProfilePictureImageViewDelegate-Protocol.h"
#import "IGTranslationNetworkDataSourceDelegate-Protocol.h"

@class IGCommentGroupCaption, IGCommentModel, IGDefaultVerifiedFeedTheme, IGFollowButtonViewConfiguration, IGFollowController, IGHeaderFooterSupplementaryViewSource, IGMedia, IGSponsoredSupportConfiguration, IGTranslationNetworkDataSource, IGUserSession, NSString, UINavigationController;
@protocol IGCommentSectionDelegate, IGFeedItemLoggingProviderDelegate;

@interface IGCommentGroupCaptionSectionController : IGListSectionController <IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate, IGCommentGroupCaptionContentViewDelegate, IGMediaUpdatedListener, IGFollowControllerDelegate, IGTranslationNetworkDataSourceDelegate, IGCommentBaseSectionController, IGCommentCellTapDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    NSString *_analyticsModule;
    _Bool _hideProfileImage;
    IGCommentGroupCaption *_groupCaption;
    IGDefaultVerifiedFeedTheme *_feedTheme;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _usernameAboveCaption;
    IGFollowController *_followController;
    IGFollowButtonViewConfiguration *_followButtonConfig;
    IGTranslationNetworkDataSource *_translationDataSource;
    _Bool _expanded;
    id <IGCommentSectionDelegate> _delegate;
    UINavigationController *_navigationController;
    IGCommentModel *_commentModel;
    IGHeaderFooterSupplementaryViewSource *_compositedViewSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGHeaderFooterSupplementaryViewSource *compositedViewSource; // @synthesize compositedViewSource=_compositedViewSource;
@property(readonly, nonatomic) IGCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <IGCommentSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2;
- (void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)_logAdBrandProfileEvent;
- (double)_commentWidth;
- (void)_openProfilePageForUser:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didEndLongPressLikeButtonOnCommentGroupCaptionView:(id)arg1;
- (void)didLongPressLikeButtonOnCommentGroupCaptionView:(id)arg1;
- (void)didTapLikeButtonOnCommentGroupCaptionView:(id)arg1;
- (void)commentGroupCaptionContentViewDidTapTranslate;
- (void)commentGroupCaptionContentViewDidTapTruncatedCaption;
- (void)commentGroupCaptionContentViewDidTapUser:(id)arg1;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)didSingleTapOnCommentCell:(id)arg1;
- (id)commentForCommentCell:(id)arg1;
- (id)supplementaryViewSource;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)_performLikeOnCaptionView:(id)arg1;
- (id)_captionViewModel;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 analyticsModule:(id)arg3 loggingDelegate:(id)arg4 sponsoredSupportConfiguration:(id)arg5 captionOption:(CDStruct_8024420c)arg6 isModalViewController:(_Bool)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
