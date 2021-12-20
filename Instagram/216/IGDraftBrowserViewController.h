//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGPanavisionDraftStore, IGUserSession, NSMutableOrderedSet, NSMutableSet, NSString, UICollectionView;
@protocol IGDraftBrowserViewControllerDelegate;

@interface IGDraftBrowserViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    IGPanavisionDraftStore *_panavisionDraftStore;
    _Bool _isEditing;
    _Bool _hasSimplifiedVideo;
    id <IGDraftBrowserViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    NSMutableOrderedSet *_draftPreviews;
    NSMutableSet *_selectedDraftPreviews;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSimplifiedVideo; // @synthesize hasSimplifiedVideo=_hasSimplifiedVideo;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) NSMutableSet *selectedDraftPreviews; // @synthesize selectedDraftPreviews=_selectedDraftPreviews;
@property(retain, nonatomic) NSMutableOrderedSet *draftPreviews; // @synthesize draftPreviews=_draftPreviews;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGDraftBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onCancelModal;
- (void)_loadData;
- (void)_deleteConfirmed;
- (void)_deleteSelectedButtonTapped;
- (void)_doneButtonTapped;
- (void)_editButtonTapped;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

