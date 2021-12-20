//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGGuide, NSString;

@interface IGGuideUserIntentTarget : NSObject <FBIntentTarget>
{
    IGGuide *_guide;
    NSString *_guideItemPk;
    unsigned long long _entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) NSString *guideItemPk; // @synthesize guideItemPk=_guideItemPk;
@property(readonly, nonatomic) IGGuide *guide; // @synthesize guide=_guide;
- (id)initWithGuide:(id)arg1 guideItemPk:(id)arg2 entryPoint:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

