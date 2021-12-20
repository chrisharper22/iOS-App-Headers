//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;
@protocol NSObject;

@interface FBARMotionStatusBarOrientationListener : NSObject
{
    struct mutex _dataMutex;
    long long _statusBarOrientation;
    UIApplication *_application;
    id <NSObject> _notificationToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopListening;
- (void)startListening;
- (void)_updateOrientationFromApplication;
@property(readonly, nonatomic) long long statusBarOrientation;
- (id)initWithApplication:(id)arg1;

@end
