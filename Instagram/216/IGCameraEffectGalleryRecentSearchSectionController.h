//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGSearchCollectionViewCellDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGCameraEffectGalleryRecentSearchSectionControllerDelegate;

@interface IGCameraEffectGalleryRecentSearchSectionController : IGListGenericSectionController <IGSearchCollectionViewCellDelegate>
{
    id <IGCameraEffectGalleryRecentSearchSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)searchCollectionViewCellDidTapAvatar:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapCellButton:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapCellDestructionButton:(id)arg1 viewModel:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

