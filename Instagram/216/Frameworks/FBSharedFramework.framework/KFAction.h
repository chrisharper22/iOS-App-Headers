//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFActionModel, KFInteractivityToolbox;

@interface KFAction : NSObject
{
    KFInteractivityToolbox *_toolbox;
    KFActionModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) KFActionModel *model; // @synthesize model=_model;
- (void)executeWithExtras:(id)arg1;
- (id)initWithInteractivityToolbox:(id)arg1 model:(id)arg2;

@end

