//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGShareListManagerDelegate-Protocol.h"
#import "IGSharedKeyboardObserverHideListener-Protocol.h"
#import "IGSharedKeyboardObserverShowListener-Protocol.h"
#import "IGSharingUIKitShareSheetAdvancedSettingsSectionControllerDelegate-Protocol.h"
#import "IGSharingUIKitShareSheetCaptionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGEditedPost, IGFeedCreationFlowLogger, IGListAdapter, IGMediaMetadata, IGNftComposePostMetadataViewControllerConfiguration, IGNftComposePostUploader, IGShareFooterView, IGShareListManager, IGSharedKeyboardObserver, IGSharingUIKitShareSheetCaptionView, IGUserSession, NSString, UIActivityIndicatorView, UIBarButtonItem, UICollectionView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, _TtC22IGNftComposeNetworking25IGNftComposeCreatePostAPI;
@protocol IGNftComposePostMetadataViewControllerDelegate;

@interface IGNftComposePostMetadataViewController : IGViewController <IGListAdapterDataSource, IGSharedKeyboardObserverHideListener, IGSharedKeyboardObserverShowListener, IGShareListManagerDelegate, UIGestureRecognizerDelegate, IGSharingUIKitShareSheetCaptionViewDelegate, IGSharingUIKitShareSheetAdvancedSettingsSectionControllerDelegate>
{
    IGNftComposePostMetadataViewControllerConfiguration *_configuration;
    IGMediaMetadata *_mediaMetadata;
    IGShareListManager *_shareListManager;
    IGUserSession *_userSession;
    IGNftComposePostUploader *_postUploader;
    _TtC22IGNftComposeNetworking25IGNftComposeCreatePostAPI *_createPostAPI;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGSharingUIKitShareSheetCaptionView *_captionView;
    UIView *_overlayView;
    IGShareFooterView *_footerView;
    IGEditedPost *_editedPost;
    long long _uploadStrategy;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    IGSharedKeyboardObserver *_keyboardObserver;
    UITapGestureRecognizer *_keyboardDismissTap;
    UISwipeGestureRecognizer *_keyboardDismissSwipe;
    UIView *_autocompleteContainerView;
    UIActivityIndicatorView *_activityIndicatorView;
    IGFeedCreationFlowLogger *_feedCreationFlowLogger;
    id <IGNftComposePostMetadataViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNftComposePostMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoShareSheetDidTapAdvancedSettings:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFailLoginForService:(long long)arg2;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (id)viewControllerForShareConfiguration;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 userInteraction:(_Bool)arg2;
- (void)shareListNeedsFullReload;
- (void)_commitEditsByPerformingApiRequest;
- (void)_removeOverlayView;
- (void)_presentDimmingOverlayViewWithContentBounds:(struct CGRect)arg1 animationDuration:(double)arg2;
- (void)_showToastForError:(id)arg1;
- (void)_showLoading:(_Bool)arg1;
- (_Bool)_isEditMode;
- (id)_thumbnailImage;
- (id)overlayView;
- (void)_configureForMediaMetadata;
- (struct UIEdgeInsets)_contentInsets;
- (double)_keyboardHeight;
- (void)_animateKeyboardTransitionWithDuration:(double)arg1 curve:(long long)arg2;
- (void)sharedKeyboardObserverKeyboardDidHide:(id)arg1;
- (void)sharedKeyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)videoShareSheetCaptionViewNeedsToHideAutocompleteContainerView:(id)arg1;
- (void)videoShareSheetCaptionViewNeedsToShowAutocompleteContainerView:(id)arg1;
- (void)videoShareSheetCaptionViewDidBeginEditing:(id)arg1;
- (void)videoShareSheetCaptionView:(id)arg1 didEndEditingWithTitle:(id)arg2;
- (void)videoShareSheetCaptionView:(id)arg1 didEndEditingWithCaption:(id)arg2;
- (void)sharedKeyboardObserverKeyboardDidShow:(id)arg1;
- (void)sharedKeyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleSwipeGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_logEndShareSession;
- (void)_postUploadButtonTapped;
- (void)_doneEditingButtonTapped;
- (void)_backOrCancelButtonTapped;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1 feedCreationFlowLogger:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

