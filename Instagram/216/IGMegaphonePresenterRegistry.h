//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGMegaphonePresenterRegistry : NSObject
{
    NSArray *_presenterClasses;
}

+ (id)applicationRegistry;
- (void).cxx_destruct;
- (id)presenterForMegaphone:(id)arg1 context:(id)arg2;
- (Class)_presenterClassForMegaphone:(id)arg1 context:(id)arg2;
- (id)initWithPresenterClasses:(id)arg1;

@end

