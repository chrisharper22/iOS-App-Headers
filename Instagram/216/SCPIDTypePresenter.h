//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCPDocument;

@interface SCPIDTypePresenter : NSObject
{
    SCPDocument *_chosenDocument;
    NSArray *_availableDocuments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableDocuments; // @synthesize availableDocuments=_availableDocuments;
@property(retain, nonatomic) SCPDocument *chosenDocument; // @synthesize chosenDocument=_chosenDocument;
- (id)initWithAvailableDocuments:(id)arg1;

@end
