//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface IGTextFilterTrieNode : NSObject
{
    NSMutableDictionary *_children;
    unsigned long long _depth;
    NSString *_symbol;
    IGTextFilterTrieNode *_failure;
    NSMutableArray *_outputs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *outputs; // @synthesize outputs=_outputs;
@property(nonatomic) __weak IGTextFilterTrieNode *failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
- (id)description;
- (id)getNodeForSymbol:(id)arg1;
- (id)addNodeForSymbol:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (id)initWithSymbol:(id)arg1 parent:(id)arg2;
- (id)init;

@end

