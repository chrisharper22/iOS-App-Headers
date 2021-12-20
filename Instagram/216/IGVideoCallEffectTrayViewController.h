//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGVideoCallEffectTrayViewControllerProtocol-Protocol.h"

@class MISSING_TYPE;

@interface IGVideoCallEffectTrayViewController : UIViewController <IGVideoCallEffectTrayViewControllerProtocol>
{
    MISSING_TYPE *userSession;
    MISSING_TYPE *entryPoint;
    MISSING_TYPE *surface;
    MISSING_TYPE *captureType;
    MISSING_TYPE *supplementaryButtonModel;
    MISSING_TYPE *isE2EEMandated;
    MISSING_TYPE *modes;
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_effectTrayView;
    MISSING_TYPE *$__lazy_storage_$_effectTrayViewController;
    MISSING_TYPE *$__lazy_storage_$_modeSwitcherView;
    MISSING_TYPE *$__lazy_storage_$_supplementaryButton;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)supplementaryButtonTapped:(id)arg1;
- (void)resetToDefaultMode;
- (void)selectAvatarMode;
- (id)cameraTrayViewController;
- (void)setDelegate:(id)arg1;
- (void)setModeSwitcherDelegate:(id)arg1;
- (void)setEffectTrayDelegate:(id)arg1;
- (void)setEffectTrayDataSource:(id)arg1;
- (void)setModes:(id)arg1 withSelectedMode:(id)arg2;
- (void)setSelectedMode:(id)arg1;
- (long long)selectedEffectItemIndex;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)reloadEffectData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserSession:(id)arg1 modes:(id)arg2 entryPoint:(long long)arg3 surface:(long long)arg4 captureType:(long long)arg5 supplementaryButtonModel:(id)arg6 isE2EEMandated:(_Bool)arg7;

@end
