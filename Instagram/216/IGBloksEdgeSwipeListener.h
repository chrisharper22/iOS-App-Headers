//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKLispyExpression, UIView;

@interface IGBloksEdgeSwipeListener : NSObject
{
    struct BKLispyEnvironment _currentEnvironment;
    BKLispyExpression *_onSwipeAction;
    UIView *_attachedView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_edgeSwipeAction:(id)arg1;
- (void)_removeLeftEdgeRecognizers:(id)arg1;
- (id)_initWithViewController:(id)arg1 environment:(const void *)arg2 shouldBeEnabled:(_Bool)arg3 andSwipeAction:(id)arg4;

@end

