//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKLispyExpression, BKModel, NSArray, NSString;

@interface IGBloksScreenNavbarContrib : NSObject
{
    _Bool _hideBackButton;
    _Bool _hideDivider;
    _Bool _centerAlignCustomTitle;
    BKLispyExpression *_onBackPressLispyExpression;
    BKLispyExpression *_customTitle;
    BKModel *_leftButton;
    NSArray *_rightButtons;
    NSString *_iosStatusBarStyle;
    BKModel *_tintColorModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool centerAlignCustomTitle; // @synthesize centerAlignCustomTitle=_centerAlignCustomTitle;
@property(readonly, nonatomic) BKModel *tintColorModel; // @synthesize tintColorModel=_tintColorModel;
@property(readonly, nonatomic) NSString *iosStatusBarStyle; // @synthesize iosStatusBarStyle=_iosStatusBarStyle;
@property(readonly, nonatomic) _Bool hideDivider; // @synthesize hideDivider=_hideDivider;
@property(readonly, nonatomic) NSArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(readonly, nonatomic) BKModel *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) BKLispyExpression *customTitle; // @synthesize customTitle=_customTitle;
@property(readonly, nonatomic) _Bool hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property(readonly, nonatomic) BKLispyExpression *onBackPressLispyExpression; // @synthesize onBackPressLispyExpression=_onBackPressLispyExpression;
- (id)initWithOnBackPressLispyExpression:(id)arg1 hideBackButton:(_Bool)arg2 customTitle:(id)arg3 leftButton:(id)arg4 rightButtons:(id)arg5 hideDivider:(_Bool)arg6 iosStatusBarStyle:(id)arg7 tintColorModel:(id)arg8 centerAlignCustomTitle:(_Bool)arg9;

@end

