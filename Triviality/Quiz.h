//
//  Quiz.h
//  Triviality
//
//  Created by tstone10 on 5/22/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject

@property (nonatomic, retain) NSMutableArray * movieArray; // Previous Property
@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;
@property (nonatomic, readonly, strong) NSString * quote;
@property (nonatomic, readonly, strong) NSString * ans1;
@property (nonatomic, readonly, strong) NSString * ans2;
@property (nonatomic, readonly, strong) NSString * ans3;

-(id) initWithQuiz:(NSString*)plistName; // Previous Method
-(void) nextQuestion: (NSUInteger) idx;
-(BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer;

@end