//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGLAppStateMonitor, FBGLContext, FBLazyCreator;

@interface FBGLContextProvider : NSObject
{
    FBGLAppStateMonitor *_appStateMonitor;
    FBLazyCreator *_contextCreator;
}

+ (id)newWithContextCreator:(id)arg1;
+ (id)newWithExistingContext:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(readonly) _Bool canProvideContext;
@property(readonly) FBGLContext *context;
- (id)initWithContextCreator:(id)arg1;

@end

