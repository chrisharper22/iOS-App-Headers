//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IGVideoCallHaloHeaderView, MISSING_TYPE;

@interface IGVideoCallHaloHeaderViewController : UIViewController
{
    MISSING_TYPE *headerView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaderViewDelegate:(id)arg1 isMinimizeButtonEnabled:(_Bool)arg2 isMoreButtonEnabled:(_Bool)arg3 isHangUpButtonEnabled:(_Bool)arg4 isE2eeMandated:(_Bool)arg5 headerMode:(long long)arg6 isNewMimimizeButtonAsset:(_Bool)arg7;
@property(nonatomic, retain) IGVideoCallHaloHeaderView *headerView; // @synthesize headerView;

@end

