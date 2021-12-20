//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGReactRootConfiguration-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, UIColor;

@interface IGReactRootViewControllerConfiguration : NSObject <IGReactRootConfiguration, NSCopying>
{
    _Bool _logoAsTitle;
    _Bool _showCancelButton;
    _Bool _statusBarHidden;
    _Bool _navigationBarHidden;
    _Bool _navigationGestureDisabled;
    _Bool _loadingViewHidden;
    int _tabBarVisibility;
    int _ttiEventId;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
    NSString *_title;
    NSString *_analyticsModule;
    NSString *_actionType;
    long long _statusBarStyle;
    NSString *_ttiEventName;
    NSDictionary *_ttiEventAnnotations;
    UIColor *_viewBackgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *viewBackgroundColor; // @synthesize viewBackgroundColor=_viewBackgroundColor;
@property(readonly, copy, nonatomic) NSDictionary *ttiEventAnnotations; // @synthesize ttiEventAnnotations=_ttiEventAnnotations;
@property(readonly, nonatomic) int ttiEventId; // @synthesize ttiEventId=_ttiEventId;
@property(readonly, copy, nonatomic) NSString *ttiEventName; // @synthesize ttiEventName=_ttiEventName;
@property(readonly, nonatomic) _Bool loadingViewHidden; // @synthesize loadingViewHidden=_loadingViewHidden;
@property(readonly, nonatomic) _Bool navigationGestureDisabled; // @synthesize navigationGestureDisabled=_navigationGestureDisabled;
@property(readonly, nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(readonly, nonatomic) int tabBarVisibility; // @synthesize tabBarVisibility=_tabBarVisibility;
@property(readonly, nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) _Bool logoAsTitle; // @synthesize logoAsTitle=_logoAsTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModuleName:(id)arg1 initialProperties:(id)arg2 title:(id)arg3 logoAsTitle:(_Bool)arg4 analyticsModule:(id)arg5 actionType:(id)arg6 showCancelButton:(_Bool)arg7 tabBarVisibility:(int)arg8 statusBarHidden:(_Bool)arg9 statusBarStyle:(long long)arg10 navigationBarHidden:(_Bool)arg11 navigationGestureDisabled:(_Bool)arg12 loadingViewHidden:(_Bool)arg13 ttiEventName:(id)arg14 ttiEventId:(int)arg15 ttiEventAnnotations:(id)arg16 viewBackgroundColor:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
