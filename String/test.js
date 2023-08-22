class chainingMethods {
//   constructor() {
//     this.total = 0;
//     this.Icrore = 0;
//     this.thounsands = 0;
//     this.lakh = 0;
//     this.hundreds = 0;
//     this.tens = 0;
//     this.change = 0;
//     this.Crore = (num =0) => {
//       this.Icrore = (this.Icrore ?? 0) + num;
//       this.total = num * 10000000 + (this.total ?? 0);
//       return { ...this };
//     };
//     this.Thousands = (num =0) => {
//       this.thounsands = (this.thounsands ?? 0) + num;
//       this.total = num * 1000 + (this.total ?? 0);
//       return { ...this };
//     };
//     this.Lakh = (num =0) => {
//       this.lakh = (this.lakh ?? 0) + num;
//       this.total = num * 100000 + (this.total ?? 0);
//       return { ...this };
//     };
//     this.Hundreds = (num =0) => {
//       this.hundreds = (this.hundreds ?? 0) + num;
//       this.total = num * 100 + (this.total ?? 0);
//       return { ...this };
//     };
//     this.Tens = (num =0) => {
//       this.tens = (this.tens ?? 0) + num;
//       this.total = num * 10 + (this.total ?? 0);
//       return { ...this };
//     };
//     this.Change = (num =0) => {
//       this.change = (this.change ?? 0) + num;
//       this.total = num + (this.total ?? 0);
//       return { ...this };
//     };
//   }
//   reset (){
//     this.total = 0;
//     this.Icrore = 0;
//     this.thounsands = 0;
//     this.lakh = 0;
//     this.hundreds = 0;
//     this.tens = 0;
//     this.change = 0;
//   }
// }

// //  ================================== directly creating object =============================

// // const Crore =(num=0)=>{
// //     console.log(this)
// //     this.Icrore = (this.Icrore ?? 0) + num;
// //    this.total = (num * 10000000)  + (this.total ?? 0)
// //     return {...this,...chainObject}
// // }
// // const Thousands =(num=0)=>{
// //   console.log(this)
// //   this.thounsands = (this.thounsands ?? 0) + num;
// //  this.total = (num * 1000)  + (this.total ?? 0)
// //   return {...this,...chainObject}
// // }
// // const Lakh =(num=0)=>{
// //   console.log(this)
// //   this.lakh = (this.lakh ?? 0) + num;
// //  this.total = (num * 100000)  + (this.total ?? 0)
// //   return {...this,...chainObject}
// // }
// // const Hundreds =(num=0)=>{
// //   console.log(this)
// //   this.hundreds = (this.hundreds ?? 0) + num;
// //  this.total = (num * 100)  + (this.total ?? 0)
// //   return {...this,...chainObject}
// // }
// // const Tens =(num=0)=>{
// //   console.log(this)
// //   this.tens = (this.tens ?? 0) + num;
// //  this.total = (num * 10)  + (this.total ?? 0)
// //   return {...this,...chainObject}
// // }
// // const Change =(num = 0)=>{
// //   console.log(this)
// //   this.change = (this.change ?? 0) + num;
// //  this.total = (num)  + (this.total ?? 0)
// //   return {...this,...chainObject}
// // }

// // const chainObject = {

// //     // total :0,
// //     // Icrore : 0,
// //     // thounsands : 0,
// //     // lakh : 0,
// //     // tens : 0,
// //     Crore: (num)=>{
// //       return Crore(num)
// //   },
// //   Thousands,
// //   Lakh,
// //   Tens
// // }

// // console.log(chainObject.Crore(5).Crore(5).Crore(5).Lakh(2).Thousands(4).Tens(4).Tens(4).total)

// //  using class
// const newClass = new chainingMethods();
// // const newClass1 = new chainingMethods();
// // const newClass2 = new chainingMethods();
// newClass.protoType.NewFunc =function (num) {
//   return {...this,num};
// }
// console.log(
//   newClass.Crore(5).Crore(5).Lakh(2).Thousands(4).Hundreds(2).Tens(4).Lakh(2)
//     .total
// );
// newClass.reset();
// console.log(
//   newClass.Lakh(2).Thousands(4).Hundreds(2).Tens(4).Lakh(2)
//   .total,
//   'not crore'
//   );
//   newClass.reset();
// console.log(
//   newClass.Tens(4.54)
//     .total,
//     'only tens'
// );
// console.log(newClass)
