//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

@class IGSeparatorSupplementaryViewSource, IGSpinnerLabelViewModel;

@interface IGSpinnerLabelSectionController : IGListBindingSingleSectionController
{
    IGSpinnerLabelViewModel *_viewModel;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSeparatorSupplementaryViewSource *separatorViewSource; // @synthesize separatorViewSource=_separatorViewSource;
@property(retain, nonatomic) IGSpinnerLabelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (Class)cellClass;

@end
