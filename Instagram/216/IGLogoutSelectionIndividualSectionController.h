//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGLogoutIndividualAccountSelectionModel;
@protocol IGLogoutSelectionIndividualSectionControllerDelegate;

@interface IGLogoutSelectionIndividualSectionController : IGListSectionController
{
    IGLogoutIndividualAccountSelectionModel *_individualAccountSelectionModel;
    id <IGLogoutSelectionIndividualSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLogoutSelectionIndividualSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;

@end
