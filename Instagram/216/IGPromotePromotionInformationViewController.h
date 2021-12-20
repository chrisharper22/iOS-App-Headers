//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

@class IGBoostPostLogger, IGBottomButtonsView, IGImageView, IGUserSession, NSString, NSURL, UIActivityIndicatorView, UILabel, UITextView, UIView;

@interface IGPromotePromotionInformationViewController : IGPromoteViewController
{
    NSString *_mediaId;
    IGUserSession *_userSession;
    _Bool _isStoryPost;
    unsigned long long _primaryButtonActionType;
    NSURL *_primaryButtonActionUrl;
    NSString *_contentProviderPath;
    IGBottomButtonsView *_actionButton;
    UIActivityIndicatorView *_spinner;
    UIView *_contentView;
    IGImageView *_thumbnailImageView;
    UILabel *_titleLabel;
    UITextView *_textView;
    IGBoostPostLogger *_logger;
}

- (void).cxx_destruct;
- (void)_updateViewWithDataModel:(id)arg1;
- (void)_handleContentResponseWithDataModel:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_fetchData;
- (void)_showLoadingView:(_Bool)arg1;
- (void)_onCancelPressed;
- (void)_handleInternalDeepLink;
- (void)_onActionButtonPressed;
- (void)viewDidLayoutSubviews;
- (void)_setupContentView;
- (void)_setupSpinnerView;
- (void)_setupTextView;
- (void)_setupTitleLabel;
- (void)_setupThumbnailImageView;
- (void)_setupActionButtonView;
- (void)_setupViewHierarchy;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 contentProviderPath:(id)arg2 mediaId:(id)arg3 logger:(id)arg4;

@end
