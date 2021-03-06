//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSurveyControlNode : NSObject
{
    NSString *_compositeControlNode;
    NSArray *_compositePageNodes;
    long long _branchDefaultPageIndex;
    long long _branchQuestionID;
    NSArray *_surveyBranchResonseMaps;
    long long _branchSubquestionIndex;
    NSString *_nodeType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nodeType; // @synthesize nodeType=_nodeType;
@property(readonly, nonatomic) long long branchSubquestionIndex; // @synthesize branchSubquestionIndex=_branchSubquestionIndex;
@property(readonly, copy, nonatomic) NSArray *surveyBranchResonseMaps; // @synthesize surveyBranchResonseMaps=_surveyBranchResonseMaps;
@property(readonly, nonatomic) long long branchQuestionID; // @synthesize branchQuestionID=_branchQuestionID;
@property(readonly, nonatomic) long long branchDefaultPageIndex; // @synthesize branchDefaultPageIndex=_branchDefaultPageIndex;
@property(readonly, copy, nonatomic) NSArray *compositePageNodes; // @synthesize compositePageNodes=_compositePageNodes;
@property(readonly, copy, nonatomic) NSString *compositeControlNode; // @synthesize compositeControlNode=_compositeControlNode;
- (id)initWithCompositeControlNode:(id)arg1 compositePageNodes:(id)arg2 branchDefaultPageIndex:(long long)arg3 branchQuestionID:(long long)arg4 surveyBranchResonseMaps:(id)arg5 branchSubquestionIndex:(long long)arg6 nodeType:(id)arg7;

@end

