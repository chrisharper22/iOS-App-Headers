//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKContext, BKModel;

@interface BKBloksComponentController : NSObject
{
    BKModel *_model;
    BKContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak BKContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak BKModel *model; // @synthesize model=_model;
- (void)component:(id)arg1 didPrepareLayout:(const void *)arg2;
- (void)componentWillUnmount:(id)arg1;
- (void)componentDidMount:(id)arg1;
- (void)componentWillRelinquishView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;
- (void)setModel:(id)arg1 context:(id)arg2;

@end

