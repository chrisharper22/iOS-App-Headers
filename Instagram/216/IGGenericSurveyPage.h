//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSArray, NSString;

@interface IGGenericSurveyPage : NSObject <IGListDiffable>
{
    NSString *_pk;
    NSArray *_modules;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)_areAllModulesTopLevelModule:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPK:(id)arg1 modules:(id)arg2;
- (id)initWithDictionary:(id)arg1 objectStores:(id)arg2;

@end

