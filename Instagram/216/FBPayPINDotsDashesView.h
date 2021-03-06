//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol FBPayPINDotsDashesViewDataSource;

@interface FBPayPINDotsDashesView : UIView
{
    NSArray *_dotViews;
    NSArray *_dashViews;
    id <FBPayPINDotsDashesViewDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayPINDotsDashesViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)shakeDotsViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadView;
- (id)_setLocationForViews:(id)arg1;
- (id)_setDotsSizeConstraints;
- (id)_setDashSizeConstraints;
- (void)_setupConstraints;
- (void)_setupDotViews;
- (void)_setupDashViews;
- (void)_setupView;
- (id)init;

@end

