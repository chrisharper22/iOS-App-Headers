//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKeyedDoubleLinkedListNode, NSMutableDictionary;

@interface FBKeyedOrderedList : NSObject
{
    NSMutableDictionary *_keyToNode;
    FBKeyedDoubleLinkedListNode *_headNode;
    FBKeyedDoubleLinkedListNode *_tailNode;
}

- (void).cxx_destruct;
- (id)allItems;
- (_Bool)isEmpty;
- (void)removeItemForKey:(id)arg1;
- (void)insertItem:(id)arg1 forKey:(id)arg2 belowKey:(id)arg3;
- (void)insertItem:(id)arg1 forKey:(id)arg2 aboveKey:(id)arg3;
- (void)prependItem:(id)arg1 forKey:(id)arg2;
- (void)appendItem:(id)arg1 forKey:(id)arg2;
- (id)nodeForKey:(id)arg1;
- (id)itemForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end
