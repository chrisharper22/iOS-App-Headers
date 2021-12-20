//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayBaseCellViewModelBuilder.h>

@class NSString;

@interface FBPayTitleSubtitleDetailCellViewModelBuilder : FBPayBaseCellViewModelBuilder
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_detailText;
    long long _accessoryType;
    NSString *_reuseIdentifier;
    CDUnknownBlockType _selectAction;
    double _detailLabelWidth;
}

+ (id)viewModelBuilderFromExistingViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)withDetailLabelWidth:(double)arg1;
- (id)withSelectAction:(CDUnknownBlockType)arg1;
- (id)withReuseIdentifier:(id)arg1;
- (id)withAccessoryType:(long long)arg1;
- (id)withDetailText:(id)arg1;
- (id)withSubtitle:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end
