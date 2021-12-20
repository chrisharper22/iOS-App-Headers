//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>

@class IGBottomSheetTrayView, NSString;

@interface IGBottomSheetTray : UIViewController <IGGestureHandler>
{
    IGBottomSheetTrayView *_trayView;
    UIViewController *_content;
}

+ (id)trayWithStyle:(long long)arg1 content:(id)arg2;
+ (id)trayWithStyle:(long long)arg1;
+ (id)whiteTrayWithContent:(id)arg1;
+ (id)whiteTray;
+ (id)darkBlurTrayWithContent:(id)arg1;
+ (id)darkBlurTray;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *content; // @synthesize content=_content;
- (_Bool)canRespondToGesture:(id)arg1;
@property(nonatomic) _Bool contentViewExtendsBeneathDragIndicator;
@property(nonatomic) double cornerRadius;
@property(nonatomic) _Bool dragIndicatorVisible;
@property(nonatomic) long long style;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_initWithStyle:(long long)arg1 content:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
