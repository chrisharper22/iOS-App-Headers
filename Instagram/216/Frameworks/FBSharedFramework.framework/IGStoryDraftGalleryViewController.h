//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGStoryDraftGalleryViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryDraftStoreListener-Protocol.h>

@class IGStoryDraftGalleryView, IGStoryDraftStore, IGUserSession, NSString, UIButton;
@protocol IGStoryDraftGalleryViewControllerDelegate;

@interface IGStoryDraftGalleryViewController : IGViewController <IGStoryDraftGalleryViewDelegate, IGStoryDraftStoreListener>
{
    IGUserSession *_userSession;
    IGStoryDraftStore *_draftStore;
    UIButton *_discardButton;
    _Bool _isDiscardVisible;
    id <IGStoryDraftGalleryViewControllerDelegate> _delegate;
    IGStoryDraftGalleryView *_draftsGalleryView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryDraftGalleryView *draftsGalleryView; // @synthesize draftsGalleryView=_draftsGalleryView;
@property(nonatomic) __weak id <IGStoryDraftGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyDraftStore:(id)arg1 didDeleteDraftsWithIdentifiers:(id)arg2;
- (void)storyDraftStore:(id)arg1 didSaveDraft:(id)arg2;
- (void)storyDraftStore:(id)arg1 didFinishLoadingSavedDrafts:(id)arg2;
- (void)draftsGalleryView:(id)arg1 willDisplayDraft:(id)arg2;
- (void)draftsGalleryView:(id)arg1 didDeselectDraft:(id)arg2;
- (void)draftsGalleryView:(id)arg1 didSelectDraft:(id)arg2;
- (void)onCancelModal;
- (void)_setDiscardButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_deleteConfirmed;
- (void)_deleteSelectedButtonTapped;
- (void)_cancelButtonTapped;
- (void)_selectButtonTapped;
@property(nonatomic) _Bool isEditing;
- (void)_updateDiscardButton;
- (void)_layoutDiscardButton;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

