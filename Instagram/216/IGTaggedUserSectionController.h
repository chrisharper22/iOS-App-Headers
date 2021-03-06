//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGProfileAndTrailingButtonControllerDelegate-Protocol.h"
#import "IGProfileProviderBodyDelegate-Protocol.h"
#import "IGProfileProviderIconButtonDelegate-Protocol.h"

@class IGTaggedUserViewModel, NSString;
@protocol IGTaggedUserSectionControllerDelegate;

@interface IGTaggedUserSectionController : IGListSectionController <IGProfileAndTrailingButtonControllerDelegate, IGProfileProviderIconButtonDelegate, IGProfileProviderBodyDelegate>
{
    IGTaggedUserViewModel *_taggedUserViewModel;
    _Bool _moreOptionsIsEnabled;
    id <IGTaggedUserSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTaggedUserSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)toggleCategoryButton:(_Bool)arg1;
- (void)profileAndTrailingButtonViewButtonTapped:(id)arg1;
- (void)profileAndTrailingButtonViewProfileBodyTapped:(id)arg1;
- (void)profileAndTrailingButtonViewProfilePictureTapped:(id)arg1;
- (void)profileProviderIconButtonTapped;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithMoreOptionsEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

