//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListSupplementaryViewSource-Protocol.h"

@class IGMultipleAccountRecoveryCellViewModel, IGNUXLayoutSpec, NSString;
@protocol IGMultipleAccountRecoverySectionControllerDelegate;

@interface IGMultipleAccountRecoverySectionController : IGListSectionController <IGListSupplementaryViewSource>
{
    IGNUXLayoutSpec *_layoutSpec;
    NSString *_contactPoint;
    NSString *_titleText;
    _Bool _hasLoggedOutUsers;
    id <IGMultipleAccountRecoverySectionControllerDelegate> _delegate;
    IGMultipleAccountRecoveryCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMultipleAccountRecoveryCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGMultipleAccountRecoverySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithLayoutSpec:(id)arg1 viewModel:(id)arg2 title:(id)arg3 contactPoint:(id)arg4 hasLoggedOutUsers:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
