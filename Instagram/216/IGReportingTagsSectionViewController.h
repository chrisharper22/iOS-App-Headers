//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGReportingComponentTagViewModel, IGSeparatorSupplementaryViewSource, IGTableLayoutSpec;
@protocol IGReportingTagsSectionViewControllerDelegate;

@interface IGReportingTagsSectionViewController : IGListSectionController
{
    unsigned long long _style;
    IGTableLayoutSpec *_layoutSpec;
    IGReportingComponentTagViewModel *_viewModel;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
    id <IGReportingTagsSectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGReportingTagsSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_separatorViewSource;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 style:(unsigned long long)arg2;

@end

