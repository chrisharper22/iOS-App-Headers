//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol FBPayBaseCellViewModel;

@interface FBPayBaseCell : UITableViewCell
{
    id <FBPayBaseCellViewModel> _viewModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayBaseCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

