//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

@class IGPromoteManagerButtonCellViewModel;

@interface IGPromoteManagerButtonSectionController : IGListBindingSingleSectionController
{
    IGPromoteManagerButtonCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPromoteManagerButtonCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;

@end
