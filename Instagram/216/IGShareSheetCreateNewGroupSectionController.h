//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@protocol IGShareSheetCreateNewGroupSectionControllerDelegate;

@interface IGShareSheetCreateNewGroupSectionController : IGListGenericSectionController
{
    id <IGShareSheetCreateNewGroupSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShareSheetCreateNewGroupSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_informDelegateOfImpression:(id)arg1;
- (void)_startTrackingImpressionsForCell:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

@end

