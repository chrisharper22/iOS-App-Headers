//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayBaseCellViewModelBuilder.h>

@class NSString, UIFont;

@interface FBPayTitleDetailCellViewModelBuilder : FBPayBaseCellViewModelBuilder
{
    NSString *_title;
    UIFont *_titleFont;
    NSString *_detailText;
    UIFont *_detailTextFont;
    long long _accessoryType;
    NSString *_reuseIdentifier;
    CDUnknownBlockType _selectAction;
}

+ (id)viewModelBuilderFromExistingViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)withSelectAction:(CDUnknownBlockType)arg1;
- (id)withReuseIdentifier:(id)arg1;
- (id)withAccessoryType:(long long)arg1;
- (id)withDetailTextFont:(id)arg1;
- (id)withDetailText:(id)arg1;
- (id)withTitleFont:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

