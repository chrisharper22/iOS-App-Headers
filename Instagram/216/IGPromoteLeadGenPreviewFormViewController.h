//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGListAdapterDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGListAdapter, IGPromoteLeadGenCreateLeadFormRequest, IGPromoteLeadGenPreviewFormFooterView, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGPromoteLeadGenPreviewFormViewControllerDelegate;

@interface IGPromoteLeadGenPreviewFormViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    _Bool _shouldShowSubmitButton;
    NSString *_heroMediaURL;
    NSString *_profileImage;
    NSString *_profileName;
    NSArray *_questions;
    IGPromoteLeadGenCreateLeadFormRequest *_createLeadFormRequest;
    IGPromoteLeadGenPreviewFormFooterView *_footerView;
    _Bool _isLoading;
    id <IGPromoteLeadGenPreviewFormViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteLeadGenPreviewFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onRightBarButtonTapped;
- (void)_onLeftBarButtonTapped;
- (void)_handleError:(id)arg1;
- (void)_handleSuccess:(id)arg1;
- (void)_updateRightBarButton;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 logger:(id)arg2 title:(id)arg3 shouldShowSubmitButton:(_Bool)arg4 heroMediaURL:(id)arg5 profileImage:(id)arg6 profileName:(id)arg7 questions:(id)arg8 createLeadFormRequest:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

