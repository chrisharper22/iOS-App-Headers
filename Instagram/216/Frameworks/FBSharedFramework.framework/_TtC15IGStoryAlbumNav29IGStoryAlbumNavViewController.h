//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <FBSharedFramework/UIImagePickerControllerDelegate-Protocol.h>
#import <FBSharedFramework/UINavigationControllerDelegate-Protocol.h>

@class MISSING_TYPE;
@protocol _TtP15IGStoryAlbumNav23IGStoryAlbumNavDelegate_;

@interface _TtC15IGStoryAlbumNav29IGStoryAlbumNavViewController : UIViewController <IGGestureHandler, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    MISSING_TYPE *collectionView;
    MISSING_TYPE *imagePickerController;
    MISSING_TYPE *smartAlbumNavData;
    MISSING_TYPE *userAlbumNavData;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) id <_TtP15IGStoryAlbumNav23IGStoryAlbumNavDelegate_> delegate; // @synthesize delegate;

@end

