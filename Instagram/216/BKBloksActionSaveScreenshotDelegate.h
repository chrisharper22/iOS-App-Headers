//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKContext, BKLispyExpression;

@interface BKBloksActionSaveScreenshotDelegate : NSObject
{
    BKContext *_context;
    BKLispyExpression *_callback;
}

- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)initWithContext:(id)arg1 callback:(id)arg2;

@end

