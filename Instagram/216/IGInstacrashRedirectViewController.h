//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IGInstacrashLogger, UIButton, UILabel;

@interface IGInstacrashRedirectViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_buildsPageButton;
    UIButton *_restartButton;
    IGInstacrashLogger *_logger;
}

- (void).cxx_destruct;
- (void)_onRestartButton:(id)arg1;
- (void)_onBuildsPageButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

