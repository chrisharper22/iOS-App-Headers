//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGGalleryDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGGalleryDataSource, NSString, UIButton, UICollectionView, UILabel, UIView;
@protocol IGStoryAlbumPickerViewControllerDelegate, IGUserLauncherSetProviding;

@interface IGStoryAlbumPickerViewController : UIViewController <IGGalleryDataSourceDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGGestureHandler, IGAnalyticsModule>
{
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    UIView *_contentWrapperView;
    UICollectionView *_collectionView;
    IGGalleryDataSource *_galleryDataSource;
    UIView *_navigationBar;
    UIButton *_dismissButton;
    UILabel *_currentAlbumTitleLabel;
    UIView *_titleSeparator;
    id <IGStoryAlbumPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryAlbumPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (long long)_collectionIndexFromIndexPath:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapNavigationBar:(id)arg1;
- (void)_dismissAlbumPicker:(id)arg1;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)arg1;
- (void)galleryDataSource:(id)arg1 didChange:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithUserLauncherSetProvider:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

